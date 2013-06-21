/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NetflixNrdObjectProtocol.h"
#import "NetflixNrdObject.h"

@class NSString;

@interface NetflixStorage : NetflixNrdObject <NetflixNrdObjectProtocol> {
}
@property(readonly, assign, nonatomic) NSString *NO_DEVICE_ACCOUNT;	// G=0x4b7445; 
+ (id)sharedInstance;	// 0x4b7359
// declared property getter: - (id)NO_DEVICE_ACCOUNT;	// 0x4b7445
- (void)clear:(id)clear;	// 0x4b79d1
- (void)clearAll;	// 0x4b7a59
- (id)data;	// 0x4b7451
- (id)getData:(id)data;	// 0x4b7581
- (id)getItem:(id)item key:(id)key;	// 0x4b786d
- (unsigned)length:(id)length;	// 0x4b7789
- (void)removeItem:(id)item key:(id)key;	// 0x4b7945
- (void)setItem:(id)item key:(id)key value:(id)value;	// 0x4b78b9
- (void)updateProperty:(id)property value:(id)value;	// 0x4b7ad9
@end
