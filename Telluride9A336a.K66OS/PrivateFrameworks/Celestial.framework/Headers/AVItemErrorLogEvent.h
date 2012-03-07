/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "Celestial-Structs.h"

@class AVItemErrorLogEventInternal, NSDate, NSString;

@interface AVItemErrorLogEvent : NSObject <NSCopying> {
@private
	AVItemErrorLogEventInternal *_playerItemErrorLogEvent;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *URI;	// G=0x36c68875; 
@property(readonly, assign, nonatomic) NSDate *date;	// G=0x36c688e5; 
@property(readonly, assign, nonatomic) NSString *errorComment;	// G=0x36c686b5; 
@property(readonly, assign, nonatomic) NSString *errorDomain;	// G=0x36c68725; 
@property(readonly, assign, nonatomic) int errorStatusCode;	// G=0x36c68155; 
@property(readonly, assign, nonatomic) NSString *playbackSessionID;	// G=0x36c68795; 
@property(readonly, assign, nonatomic) NSString *serverAddress;	// G=0x36c68805; 
- (id)init;	// 0x36c68611
- (id)initWithDictionary:(id)dictionary;	// 0x36c680e5
// declared property getter: - (id)URI;	// 0x36c68875
- (id)copyWithZone:(NSZone *)zone;	// 0x36c68145
// declared property getter: - (id)date;	// 0x36c688e5
- (void)dealloc;	// 0x36c68955
// declared property getter: - (id)errorComment;	// 0x36c686b5
// declared property getter: - (id)errorDomain;	// 0x36c68725
// declared property getter: - (int)errorStatusCode;	// 0x36c68155
- (void)finalize;	// 0x36c689c5
// declared property getter: - (id)playbackSessionID;	// 0x36c68795
// declared property getter: - (id)serverAddress;	// 0x36c68805
@end
