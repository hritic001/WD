<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
  <xsl:output method="html"/>

  <xsl:template match="/">
    <html>
      <body>
        <h2>Movie List</h2>
        <ul>
          <xsl:if test="cinema/movie/year > 2000">
            <li>
              <xsl:value-of select="cinema/movie/name"/> - 
              <xsl:value-of select="cinema/movie/director"/>
            </li>
          </xsl:if>
        </ul>
      </body>
    </html>
  </xsl:template>
  
</xsl:stylesheet>
