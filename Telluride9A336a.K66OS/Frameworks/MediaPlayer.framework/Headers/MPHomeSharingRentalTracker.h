/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "SSRequestDelegate.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface MPHomeSharingRentalTracker : NSObject <SSRequestDelegate> {
@private
	NSMutableDictionary *_rentals;	// 4 = 0x4
}
+ (id)sharedInstance;	// 0x35be0dd9
- (id)init;	// 0x35be0e45
- (id)_init;	// 0x35be0e91
- (void)_loadRentals;	// 0x35be1ffd
- (void)_saveRentals;	// 0x35be2111
- (void)addRentalWithItemID:(unsigned long long)itemID databaseID:(id)anId;	// 0x35be0f21
- (void)dealloc;	// 0x35be0ed5
- (void)removeAllRentalsForDatabaseID:(id)databaseID;	// 0x35be15d9
- (void)removeRentalWithItemID:(unsigned long long)itemID;	// 0x35be1131
- (void)request:(id)request didFailWithError:(id)error;	// 0x35be18ad
- (void)requestDidFinish:(id)request;	// 0x35be18dd
@end

