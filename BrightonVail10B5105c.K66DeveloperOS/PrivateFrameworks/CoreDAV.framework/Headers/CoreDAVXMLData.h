/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSData;

@interface CoreDAVXMLData : NSObject {
	BOOL _shouldAddFormattingSpaces;	// 4 = 0x4
	xmlTextWriter *_writer;	// 8 = 0x8
	xmlDoc *_doc;	// 12 = 0xc
	BOOL _docHasEnded;	// 16 = 0x10
	CFDictionaryRef _seenURIsToPrefixes;	// 20 = 0x14
	CFDictionaryRef _seenURIsToDepth;	// 24 = 0x18
	CFArrayRef _elementStack;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSData *data;	// G=0x36000959; 
@property(assign) BOOL shouldAddFormattingSpaces;	// G=0x36000aa9; S=0x36000ac1; @synthesize=_shouldAddFormattingSpaces
+ (BOOL)string:(id)string isEqualToXmlCharString:(const char *)xmlCharString;	// 0x360009f9
- (id)init;	// 0x35fffa35
- (const char *)_prefixForNameSpace:(const char *)nameSpace;	// 0x35fffbb5
- (void)_startElement:(id)element inNamespace:(id)aNamespace;	// 0x35fffea5
- (void)_startElement:(id)element inNamespace:(id)aNamespace withAttributeNamesAndValues:(id)attributeNamesAndValues attributes:(void *)attributes;	// 0x35ffffd9
- (void)appendElement:(id)element inNamespace:(id)aNamespace withStringContent:(id)stringContent withAttributeNamesAndValues:(id)attributeNamesAndValues;	// 0x3600057d
- (void)appendElement:(id)element inNamespace:(id)aNamespace withStringContentAsCDATA:(id)stringContentAsCDATA withAttributeNamesAndValues:(id)attributeNamesAndValues;	// 0x360006a5
// declared property getter: - (id)data;	// 0x36000959
- (void)dealloc;	// 0x35fffb2d
- (void)endElement:(id)element inNamespace:(id)aNamespace;	// 0x360002e9
// declared property setter: - (void)setShouldAddFormattingSpaces:(BOOL)addFormattingSpaces;	// 0x36000ac1
// declared property getter: - (BOOL)shouldAddFormattingSpaces;	// 0x36000aa9
- (void)startElement:(id)element inNamespace:(id)aNamespace withAttributeNamesAndValues:(id)attributeNamesAndValues;	// 0x36000095
- (void)startElement:(id)element inNamespace:(id)aNamespace withAttributes:(id)attributes;	// 0x36000165
@end
