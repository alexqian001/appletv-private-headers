/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class PDTimeListNodeList, TSUNoCopyDictionary;

@interface PDAnimation : NSObject {
	PDTimeListNodeList *mTimeListNodeList;	// 4 = 0x4
	TSUNoCopyDictionary *mBuildMap;	// 8 = 0x8
}
@property(retain) id buildMap;	// G=0x350dcaf5; S=0x34fe3009; converted property
+ (void)initialize;	// 0x34e7646d
- (id)init;	// 0x34e765d1
- (id)addTimeListNodeList;	// 0x34f96a19
// converted property getter: - (id)buildMap;	// 0x350dcaf5
- (void)dealloc;	// 0x34ee0381
// converted property setter: - (void)setBuildMap:(id)map;	// 0x34fe3009
- (id)timeListNodeList;	// 0x350dcae5
@end
