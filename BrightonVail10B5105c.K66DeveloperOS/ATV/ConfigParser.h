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
@property(retain) BuiltinConfig *builtinConfig;	// G=0x49e531; S=0x49e545; @synthesize=builtinConfig_
@property(retain) NSDictionary *builtinConfigParsableItems;	// G=0x49e555; S=0x49e569; @synthesize=builtinConfigParsableItems_
@property(assign) char **currentTag;	// G=0x49e505; S=0x49e519; @synthesize=currentTag_
@property(retain) id<NSObject, NetflixConfigProtocol> customNetflixConfig;	// G=0x49e5a5; S=0x49e5b9; @synthesize=customNetflixConfig_
@property(assign) Class customNetflixConfigClass;	// G=0x49e579; S=0x49e58d; @synthesize=customNetflixConfigClass_
@property(retain) NSDictionary *customNetflixConfigParsableItems;	// G=0x49e5c9; S=0x49e5dd; @synthesize=customNetflixConfigParsableItems_
@property(assign) XML_ParserStructRef parser;	// G=0x49e481; S=0x49e495; @synthesize=parser_
@property(assign) int parserDepth;	// G=0x49e4ad; S=0x49e4c1; @synthesize=parserDepth_
@property(assign) int tagListDepth;	// G=0x49e4d9; S=0x49e4ed; @synthesize=tagListDepth_
- (id)init;	// 0x49d859
- (id)initWithCustomNetflixConfigClass:(Class)customNetflixConfigClass;	// 0x49d86d
// declared property getter: - (id)builtinConfig;	// 0x49e531
// declared property getter: - (id)builtinConfigParsableItems;	// 0x49e555
- (void)charData:(const char *)data withLength:(int)length;	// 0x49def1
// declared property getter: - (char **)currentTag;	// 0x49e505
// declared property getter: - (id)customNetflixConfig;	// 0x49e5a5
// declared property getter: - (Class)customNetflixConfigClass;	// 0x49e579
// declared property getter: - (id)customNetflixConfigParsableItems;	// 0x49e5c9
- (void)dealloc;	// 0x49d961
- (void)dumpTags;	// 0x49dbdd
- (void)endElement:(const char *)element;	// 0x49de31
- (bool)parse:(id)parse;	// 0x49da85
// declared property getter: - (XML_ParserStructRef)parser;	// 0x49e481
// declared property getter: - (int)parserDepth;	// 0x49e4ad
// declared property setter: - (void)setBuiltinConfig:(id)config;	// 0x49e545
// declared property setter: - (void)setBuiltinConfigParsableItems:(id)items;	// 0x49e569
// declared property setter: - (void)setCurrentTag:(char **)tag;	// 0x49e519
// declared property setter: - (void)setCustomNetflixConfig:(id)config;	// 0x49e5b9
// declared property setter: - (void)setCustomNetflixConfigClass:(Class)aClass;	// 0x49e58d
// declared property setter: - (void)setCustomNetflixConfigParsableItems:(id)items;	// 0x49e5dd
// declared property setter: - (void)setParser:(XML_ParserStructRef)parser;	// 0x49e495
// declared property setter: - (void)setParserDepth:(int)depth;	// 0x49e4c1
// declared property setter: - (void)setTagListDepth:(int)depth;	// 0x49e4ed
- (void)startElement:(const char *)element withAttrs:(const char **)attrs;	// 0x49dc11
// declared property getter: - (int)tagListDepth;	// 0x49e4d9
- (id)textToObject:(char *)object cls:(Class)cls;	// 0x49e2b9
@end
