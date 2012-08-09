/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "NSObject.h"
#import <NSObject.h> // Unknown library
#import "CoreDAVItem.h"

@class NSMutableArray, NSData, NSString, NSMutableSet;

@protocol CoreDAVItem <NSObject>
+ (id)copyParseRules;
+ (id)parseRuleCache;
- (id)copyParseRules;
- (void)parserFoundAttributes:(id)attributes;
- (void)parserFoundPayload:(id)payload;
- (void)parserFoundUnrecognizedElement:(id)element;
- (void)parserSuggestsBaseURL:(id)url;
- (BOOL)validate;
- (void)write:(id)write;
@end

@interface CoreDAVItem : NSObject <CoreDAVItem> {
	NSString *_name;	// 4 = 0x4
	NSString *_nameSpace;	// 8 = 0x8
	NSMutableSet *_attributes;	// 12 = 0xc
	NSMutableArray *_extraChildItems;	// 16 = 0x10
	NSData *_payload;	// 20 = 0x14
	BOOL _useCDATA;	// 24 = 0x18
}
@property(retain) NSMutableSet *attributes;	// G=0x34c18c61; S=0x34c18c75; @synthesize=_attributes
@property(retain) NSMutableArray *extraChildItems;	// G=0x34c18c85; S=0x34c18c99; @synthesize=_extraChildItems
@property(retain) NSString *name;	// G=0x34c18c19; S=0x34c18c2d; @synthesize=_name
@property(retain) NSString *nameSpace;	// G=0x34c18c3d; S=0x34c18c51; @synthesize=_nameSpace
@property(retain) NSData *payload;	// G=0x34c18ca9; S=0x34c18cbd; @synthesize=_payload
@property(retain) id payloadAsString;	// G=0x34c18ad5; S=0x34c18b35; converted property
@property(assign) BOOL useCDATA;	// G=0x34c18ccd; S=0x34c18ce5; @synthesize=_useCDATA
+ (id)copyParseRules;	// 0x34c187dd
+ (id)parseRuleCache;	// 0x34c18809
- (id)init;	// 0x34c18479
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x34c1847d
// declared property getter: - (id)attributes;	// 0x34c18c61
- (id)childrenToWrite;	// 0x34c188f5
- (id)copyParseRules;	// 0x34c187e1
- (void)dealloc;	// 0x34c18575
- (id)description;	// 0x34c18615
// declared property getter: - (id)extraChildItems;	// 0x34c18c85
- (id)generateXMLString;	// 0x34c18b6d
- (id)hashString;	// 0x34c186d9
// declared property getter: - (id)name;	// 0x34c18c19
// declared property getter: - (id)nameSpace;	// 0x34c18c3d
- (void)parserFoundAttributes:(id)attributes;	// 0x34c188b1
- (void)parserFoundPayload:(id)payload;	// 0x34c188a1
- (void)parserFoundUnrecognizedElement:(id)element;	// 0x34c18875
- (void)parserSuggestsBaseURL:(id)url;	// 0x34c18b69
// declared property getter: - (id)payload;	// 0x34c18ca9
// converted property getter: - (id)payloadAsString;	// 0x34c18ad5
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x34c18c75
// declared property setter: - (void)setExtraChildItems:(id)items;	// 0x34c18c99
// declared property setter: - (void)setName:(id)name;	// 0x34c18c2d
// declared property setter: - (void)setNameSpace:(id)space;	// 0x34c18c51
// declared property setter: - (void)setPayload:(id)payload;	// 0x34c18cbd
// converted property setter: - (void)setPayloadAsString:(id)string;	// 0x34c18b35
// declared property setter: - (void)setUseCDATA:(BOOL)cdata;	// 0x34c18ce5
// declared property getter: - (BOOL)useCDATA;	// 0x34c18ccd
- (BOOL)validate;	// 0x34c18ad1
- (void)write:(id)write;	// 0x34c18905
@end
