/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVPropertyFindBaseTask.h"

@class NSMutableSet;

@interface CoreDAVExpandPropertiesTask : CoreDAVPropertyFindBaseTask {
	NSMutableSet *_propertiesToExpand;	// 140 = 0x8c
}
@property(retain) NSMutableSet *propertiesToExpand;	// G=0x35de34c5; S=0x35de34d9; @synthesize=_propertiesToExpand
- (id)initWithPropertiesToFind:(id)find atURL:(id)url expandedName:(id)name expandedNameSpace:(id)space;	// 0x35de2cad
- (void)addPropertyToExpandWithPropertiesToFind:(id)find expandedName:(id)name expandedNameSpace:(id)space;	// 0x35de2d39
- (void)dealloc;	// 0x35de2c61
- (id)description;	// 0x35de2db9
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x35de3481
- (id)httpMethod;	// 0x35de2e7d
- (id)parseHints;	// 0x35de3169
// declared property getter: - (id)propertiesToExpand;	// 0x35de34c5
- (id)requestBody;	// 0x35de2e89
// declared property setter: - (void)setPropertiesToExpand:(id)expand;	// 0x35de34d9
@end
