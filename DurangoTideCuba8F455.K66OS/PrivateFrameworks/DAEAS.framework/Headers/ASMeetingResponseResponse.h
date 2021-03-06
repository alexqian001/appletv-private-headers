/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSArray, NSMutableArray;

@interface ASMeetingResponseResponse : ASItem {
	NSMutableArray *_singularResponses;	// 40 = 0x28
}
@property(readonly, retain) NSArray *singularResponses;	// G=0x343455ad; @synthesize=_singularResponses
+ (BOOL)acceptsTopLevelLeaves;	// 0x34345065
+ (BOOL)frontingBasicTypes;	// 0x34344f8d
+ (BOOL)notifyOfUnknownTokens;	// 0x34344f45
+ (BOOL)parsingLeafNode;	// 0x3434501d
+ (BOOL)parsingWithSubItems;	// 0x34344fd5
- (id)init;	// 0x3434545d
- (void)_addSingularResponse:(id)response;	// 0x34344f25
- (id)asParseRules;	// 0x34344e55
- (void)dealloc;	// 0x343453a9
- (id)description;	// 0x343453f1
// declared property getter: - (id)singularResponses;	// 0x343455ad
@end

