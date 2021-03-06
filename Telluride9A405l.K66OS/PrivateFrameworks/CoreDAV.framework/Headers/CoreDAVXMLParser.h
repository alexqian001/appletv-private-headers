/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVResponseBodyParser.h"
#import <NSXMLParser.h> // Unknown library

@class CoreDAVErrorItem, NSError, CoreDAVItem, CoreDAVXMLElementGenerator, NSSet, NSURL;

@interface CoreDAVXMLParser : NSXMLParser <CoreDAVResponseBodyParser> {
@private
	CoreDAVXMLElementGenerator *_rootElementGenerator;	// 24 = 0x18
	CoreDAVXMLElementGenerator *_rootErrorGenerator;	// 28 = 0x1c
	NSSet *_parseHints;	// 32 = 0x20
	NSURL *_baseURL;	// 36 = 0x24
}
@property(retain) NSURL *baseURL;	// G=0x31012ee1; S=0x31012ef5; @synthesize=_baseURL
@property(retain) NSSet *parseHints;	// G=0x31012ea9; S=0x31012ebd; @synthesize=_parseHints
@property(readonly, assign) NSError *parserError;	// @dynamic
@property(readonly, assign) CoreDAVItem *rootElement;	// G=0x31012de9; 
@property(retain) CoreDAVXMLElementGenerator *rootElementGenerator;	// G=0x31012e39; S=0x31012e4d; @synthesize=_rootElementGenerator
@property(readonly, assign) CoreDAVErrorItem *rootError;	// G=0x31012e11; 
@property(retain) CoreDAVXMLElementGenerator *rootErrorGenerator;	// G=0x31012e71; S=0x31012e85; @synthesize=_rootErrorGenerator
- (id)initWithData:(id)data;	// 0x31012b49
- (id)initWithRootElementNameSpace:(id)rootElementNameSpace name:(id)name parseClass:(Class)aClass baseURL:(id)url;	// 0x31012b81
// declared property getter: - (id)baseURL;	// 0x31012ee1
- (void)dealloc;	// 0x31012d61
// declared property getter: - (id)parseHints;	// 0x31012ea9
- (BOOL)processData:(id)data forTask:(id)task;	// 0x31012cfd
// declared property getter: - (id)rootElement;	// 0x31012de9
// declared property getter: - (id)rootElementGenerator;	// 0x31012e39
// declared property getter: - (id)rootError;	// 0x31012e11
// declared property getter: - (id)rootErrorGenerator;	// 0x31012e71
// declared property setter: - (void)setBaseURL:(id)url;	// 0x31012ef5
// declared property setter: - (void)setParseHints:(id)hints;	// 0x31012ebd
// declared property setter: - (void)setRootElementGenerator:(id)generator;	// 0x31012e4d
// declared property setter: - (void)setRootErrorGenerator:(id)generator;	// 0x31012e85
@end

