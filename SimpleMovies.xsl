<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
  <xsl:output method="html"/>
  <xsl:template match="/">
    <html>
      <body>
        <h2>Movie List</h2>
        <ul>
            <li>
              <xsl:value-of select="cinema/movie/name"/> - 
              <xsl:value-of select="cinema/movie/director"/>
            </li>
        </ul>
      </body>
    </html>
  </xsl:template>
</xsl:stylesheet>