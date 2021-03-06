/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVPropertyFindBaseTask.h"

@class NSMutableSet;

@interface CoreDAVExpandPropertiesTask : CoreDAVPropertyFindBaseTask {
	NSMutableSet *_propertiesToExpand;	// 144 = 0x90
}
@property(retain) NSMutableSet *propertiesToExpand;	// G=0x3372587d; S=0x33725891; @synthesize=_propertiesToExpand
- (id)initWithPropertiesToFind:(id)find atURL:(id)url expandedName:(id)name expandedNameSpace:(id)space;	// 0x33725001
- (void)addPropertyToExpandWithPropertiesToFind:(id)find expandedName:(id)name expandedNameSpace:(id)space;	// 0x3372508d
- (void)dealloc;	// 0x33724fb5
- (id)description;	// 0x3372510d
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x33725839
- (id)httpMethod;	// 0x337251d1
- (id)parseHints;	// 0x337254f5
// declared property getter: - (id)propertiesToExpand;	// 0x3372587d
- (id)requestBody;	// 0x337251dd
// declared property setter: - (void)setPropertiesToExpand:(id)expand;	// 0x33725891
@end

