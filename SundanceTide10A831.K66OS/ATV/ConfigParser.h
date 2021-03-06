/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, BuiltinConfig;
@protocol NSObject, NetflixConfigProtocol;

@interface ConfigParser : XXUnknownSuperclass {
	XML_ParserStructRef parser_;	// 4 = 0x4
	int parserDepth_;	// 8 = 0x8
	int tagListDepth_;	// 12 = 0xc
	char **currentTag_;	// 16 = 0x10
	BuiltinConfig *builtinConfig_;	// 20 = 0x14
	NSDictionary *builtinConfigParsableItems_;	// 24 = 0x18
	Class customNetflixConfigClass_;	// 28 = 0x1c
	id<NSObject, NetflixConfigProtocol> customNetflixConfig_;	// 32 = 0x20
	NSDictionary *customNetflixConfigParsableItems_;	// 36 = 0x24
}
@property(retain) BuiltinConfig *builtinConfig;	// G=0x4911e9; S=0x4911fd; @synthesize=builtinConfig_
@property(retain) NSDictionary *builtinConfigParsableItems;	// G=0x49120d; S=0x491221; @synthesize=builtinConfigParsableItems_
@property(assign) char **currentTag;	// G=0x4911bd; S=0x4911d1; @synthesize=currentTag_
@property(retain) id<NSObject, NetflixConfigProtocol> customNetflixConfig;	// G=0x49125d; S=0x491271; @synthesize=customNetflixConfig_
@property(assign) Class customNetflixConfigClass;	// G=0x491231; S=0x491245; @synthesize=customNetflixConfigClass_
@property(retain) NSDictionary *customNetflixConfigParsableItems;	// G=0x491281; S=0x491295; @synthesize=customNetflixConfigParsableItems_
@property(assign) XML_ParserStructRef parser;	// G=0x491139; S=0x49114d; @synthesize=parser_
@property(assign) int parserDepth;	// G=0x491165; S=0x491179; @synthesize=parserDepth_
@property(assign) int tagListDepth;	// G=0x491191; S=0x4911a5; @synthesize=tagListDepth_
- (id)init;	// 0x490511
- (id)initWithCustomNetflixConfigClass:(Class)customNetflixConfigClass;	// 0x490525
// declared property getter: - (id)builtinConfig;	// 0x4911e9
// declared property getter: - (id)builtinConfigParsableItems;	// 0x49120d
- (void)charData:(const char *)data withLength:(int)length;	// 0x490ba9
// declared property getter: - (char **)currentTag;	// 0x4911bd
// declared property getter: - (id)customNetflixConfig;	// 0x49125d
// declared property getter: - (Class)customNetflixConfigClass;	// 0x491231
// declared property getter: - (id)customNetflixConfigParsableItems;	// 0x491281
- (void)dealloc;	// 0x490619
- (void)dumpTags;	// 0x490895
- (void)endElement:(const char *)element;	// 0x490ae9
- (bool)parse:(id)parse;	// 0x49073d
// declared property getter: - (XML_ParserStructRef)parser;	// 0x491139
// declared property getter: - (int)parserDepth;	// 0x491165
// declared property setter: - (void)setBuiltinConfig:(id)config;	// 0x4911fd
// declared property setter: - (void)setBuiltinConfigParsableItems:(id)items;	// 0x491221
// declared property setter: - (void)setCurrentTag:(char **)tag;	// 0x4911d1
// declared property setter: - (void)setCustomNetflixConfig:(id)config;	// 0x491271
// declared property setter: - (void)setCustomNetflixConfigClass:(Class)aClass;	// 0x491245
// declared property setter: - (void)setCustomNetflixConfigParsableItems:(id)items;	// 0x491295
// declared property setter: - (void)setParser:(XML_ParserStructRef)parser;	// 0x49114d
// declared property setter: - (void)setParserDepth:(int)depth;	// 0x491179
// declared property setter: - (void)setTagListDepth:(int)depth;	// 0x4911a5
- (void)startElement:(const char *)element withAttrs:(const char **)attrs;	// 0x4908c9
// declared property getter: - (int)tagListDepth;	// 0x491191
- (id)textToObject:(char *)object cls:(Class)cls;	// 0x490f71
@end

