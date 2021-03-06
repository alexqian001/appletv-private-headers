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
@property(retain) NSMutableSet *attributes;	// G=0x337178c1; S=0x337178d5; @synthesize=_attributes
@property(retain) NSMutableArray *extraChildItems;	// G=0x337178e5; S=0x337178f9; @synthesize=_extraChildItems
@property(retain) NSString *name;	// G=0x33717879; S=0x3371788d; @synthesize=_name
@property(retain) NSString *nameSpace;	// G=0x3371789d; S=0x337178b1; @synthesize=_nameSpace
@property(retain) NSData *payload;	// G=0x33717909; S=0x3371791d; @synthesize=_payload
@property(retain) id payloadAsString;	// G=0x33717735; S=0x33717795; converted property
@property(assign) BOOL useCDATA;	// G=0x3371792d; S=0x33717945; @synthesize=_useCDATA
+ (id)copyParseRules;	// 0x3371743d
+ (id)parseRuleCache;	// 0x33717469
- (id)init;	// 0x337170d9
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x337170dd
// declared property getter: - (id)attributes;	// 0x337178c1
- (id)childrenToWrite;	// 0x33717555
- (id)copyParseRules;	// 0x33717441
- (void)dealloc;	// 0x337171d5
- (id)description;	// 0x33717275
// declared property getter: - (id)extraChildItems;	// 0x337178e5
- (id)generateXMLString;	// 0x337177cd
- (id)hashString;	// 0x33717339
// declared property getter: - (id)name;	// 0x33717879
// declared property getter: - (id)nameSpace;	// 0x3371789d
- (void)parserFoundAttributes:(id)attributes;	// 0x33717511
- (void)parserFoundPayload:(id)payload;	// 0x33717501
- (void)parserFoundUnrecognizedElement:(id)element;	// 0x337174d5
- (void)parserSuggestsBaseURL:(id)url;	// 0x337177c9
// declared property getter: - (id)payload;	// 0x33717909
// converted property getter: - (id)payloadAsString;	// 0x33717735
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x337178d5
// declared property setter: - (void)setExtraChildItems:(id)items;	// 0x337178f9
// declared property setter: - (void)setName:(id)name;	// 0x3371788d
// declared property setter: - (void)setNameSpace:(id)space;	// 0x337178b1
// declared property setter: - (void)setPayload:(id)payload;	// 0x3371791d
// converted property setter: - (void)setPayloadAsString:(id)string;	// 0x33717795
// declared property setter: - (void)setUseCDATA:(BOOL)cdata;	// 0x33717945
// declared property getter: - (BOOL)useCDATA;	// 0x3371792d
- (BOOL)validate;	// 0x33717731
- (void)write:(id)write;	// 0x33717565
@end

