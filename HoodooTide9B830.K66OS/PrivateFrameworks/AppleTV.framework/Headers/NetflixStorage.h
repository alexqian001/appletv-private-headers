/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "NetflixNrdObjectProtocol.h"
#import "NetflixNrdObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NetflixStorage : NetflixNrdObject <NetflixNrdObjectProtocol> {
}
@property(readonly, assign, nonatomic) NSString *NO_DEVICE_ACCOUNT;	// G=0x32c489fd; 
+ (id)sharedInstance;	// 0x32c4891d
// declared property getter: - (id)NO_DEVICE_ACCOUNT;	// 0x32c489fd
- (void)clear:(id)clear;	// 0x32c48f6d
- (void)clearAll;	// 0x32c48ff5
- (id)data;	// 0x32c48a09
- (id)getData:(id)data;	// 0x32c48b35
- (id)getItem:(id)item key:(id)key;	// 0x32c48e09
- (unsigned)length:(id)length;	// 0x32c48d3d
- (void)removeItem:(id)item key:(id)key;	// 0x32c48ee1
- (void)setItem:(id)item key:(id)key value:(id)value;	// 0x32c48e55
- (void)updateProperty:(id)property value:(id)value;	// 0x32c49071
@end
