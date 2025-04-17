<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
  <xsl:output method="html" encoding="UTF-8" />
  <xsl:template match="/">
    <html>
      <head>
       <style>
                    h1{
                        background-color: green;
                        text-align:center;
	                    color: green; 
	                    font-size : 40px; 
	                    background-color : powderblue; 
                   }
                   th,td{
                    border: 2px, solid, black;
                        text-align:center;
                   }
                   table{
                    border-collapse:collapse;
                        margin-left:35%;
                        margin-top:-20px;
                        width:30%;
                   }

                </style>
        <title>Модели iPhone</title>
      </head>
      <body>
        <h1>Модели iPhone</h1>
        <table>
          <tr>
            <th>Цена</th>
            <th>Название</th>
            <th>iOS</th>
            <th>Камера</th>
            <th>Год выпуска</th>
          </tr>
          <xsl:for-each select="prices/publication">
            <xsl:sort select="price" order="ascending"/>
            <tr>
              <td><xsl:value-of select="price" /></td>
              <td><xsl:value-of select="name" /></td>
              <td><xsl:value-of select="ios" /></td>
              <td><xsl:value-of select="camera" /></td>
              <td><xsl:value-of select="year" /></td>
            </tr>
          </xsl:for-each>
        </table>
      </body>
    </html>
  </xsl:template>
</xsl:stylesheet>