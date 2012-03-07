/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface EXString : NSObject {
}
+ (void)buildEDString:(id)string fromChildrenOfNode:(xmlNode *)node edFont:(id)font keepWhitespace:(bool)whitespace state:(id)state;	// 0x345b0f49
+ (void)buildEDString:(id)string fromNode:(xmlNode *)node edFont:(id)font keepWhitespace:(bool)whitespace state:(id)state;	// 0x345b1049
+ (void)buildEDString:(id)string fromText:(id)text edFont:(id)font keepWhitespace:(bool)whitespace state:(id)state;	// 0x345b0d79
+ (id)cleanupWhitespace:(id)whitespace;	// 0x345b0cd5
+ (id)edStringWithRunsFromXmlDivElement:(xmlNode *)xmlDivElement state:(id)state;	// 0x345b0ef1
+ (id)edStringWithRunsFromXmlStringElement:(xmlNode *)xmlStringElement state:(id)state;	// 0x345220e1
+ (id)edTextFromXmlStringElement:(xmlNode *)xmlStringElement;	// 0x34521bed
+ (void)parseStringWithAsciiCode:(id)asciiCode;	// 0x34521cc9
+ (id)readStringWithAsciiCodeFromXmlStringElement:(xmlNode *)xmlStringElement;	// 0x34521c45
@end
