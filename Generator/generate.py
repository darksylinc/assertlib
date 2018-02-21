#!/usr/bin/env python3

import io;
import sys

if len( sys.argv ) < 2:
    print( "Usage:" )
    print( "python3 generate.py MyClassName" )
    sys.exit()

def formatFromTemplate( fullPath, namespaceStr, isHeader ):
    file = io.open( fullPath, "r", encoding = "utf-8", newline = "\n" )
    data = file.read()
    data = data.format( PREFFIX=namespaceStr, PREFFIX_UPPER_CASE=namespaceStr.upper() )

    outFilename = namespaceStr + "Assert"
    if isHeader: outFilename += ".h"
    else: outFilename += ".cpp"
    file = io.open( outFilename, "w", encoding = "utf-8", newline = "\n" )
    file.write( data )

formatFromTemplate( "template_assert.h", sys.argv[1], True )
formatFromTemplate( "template_assert.cpp", sys.argv[1], False )
