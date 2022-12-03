<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
 <xsl:output method="html"/>
 <xsl:template match="resume">
 <html>
 <head>
 <title>Resume</title>
 </head>
 <body>
 <h1><center><xsl:apply-templates select="lastName|firstName|initials"/>
 </center>
 </h1>
 <xsl:apply-templates select="bday"/>
 <xsl:for-each select="job">
 <ol>
 <xsl:apply-templates select="."/>
 </ol>
 </xsl:for-each>
 <xsl:for-each select="image">
 <ol>
 <xsl:apply-templates select="."/>
 </ol>
 </xsl:for-each>
 </body>
 </html>
 </xsl:template>
 <xsl:template match="lastName|firstName|initials">
 <xsl:value-of select="."/>
 </xsl:template>
 <xsl:template match="bday">
 <center><b><xsl:value-of select="."/></b></center>
 </xsl:template>
 <xsl:template match="job">
 <li><xsl:apply-templates select="company|post" /></li>
 </xsl:template>
 <xsl:template match="job">
 <xsl:value-of select="."/>
 </xsl:template>
 <xsl:template match="image">
 <center>
 <img src="{@href}" alt="{text()}"/>
 </center><br/>
 </xsl:template>
</xsl:stylesheet>