/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSDate;

__attribute__((visibility("hidden")))
@interface RUIYTAssetsInfo : XXUnknownSuperclass {
	int _type;	// 4 = 0x4
	int _count;	// 8 = 0x8
	NSArray *_assets;	// 12 = 0xc
	NSDate *_timeStamp;	// 16 = 0x10
	int _totalQueryResults;	// 20 = 0x14
}
@property(retain) NSArray *assets;	// G=0x29c119; S=0x29c0f1; converted property
@property(assign) int count;	// G=0x29c0e1; S=0x29c0d1; converted property
@property(retain) NSDate *timeStamp;	// G=0x29c175; S=0x29c14d; converted property
@property(assign) int totalQueryResults;	// G=0x29c13d; S=0x29c12d; converted property
@property(readonly, assign) int type;	// G=0x29c0c1; converted property
+ (id)infoFromCollectionsDocument:(id)collectionsDocument timeStamp:(id)stamp;	// 0x29bdc1
+ (id)infoFromVideosDocument:(id)videosDocument timeStamp:(id)stamp;	// 0x29bd09
+ (id)infoWithType:(int)type assets:(id)assets count:(int)count totalQueryResults:(int)results timeStamp:(id)stamp;	// 0x29bf99
- (id)initWithType:(int)type assets:(id)assets count:(int)count totalQueryResults:(int)results timeStamp:(id)stamp;	// 0x29c005
- (void).cxx_destruct;	// 0x29c189
// converted property getter: - (id)assets;	// 0x29c119
// converted property getter: - (int)count;	// 0x29c0e1
// converted property setter: - (void)setAssets:(id)assets;	// 0x29c0f1
// converted property setter: - (void)setCount:(int)count;	// 0x29c0d1
// converted property setter: - (void)setTimeStamp:(id)stamp;	// 0x29c14d
// converted property setter: - (void)setTotalQueryResults:(int)results;	// 0x29c12d
// converted property getter: - (id)timeStamp;	// 0x29c175
// converted property getter: - (int)totalQueryResults;	// 0x29c13d
// converted property getter: - (int)type;	// 0x29c0c1
@end
