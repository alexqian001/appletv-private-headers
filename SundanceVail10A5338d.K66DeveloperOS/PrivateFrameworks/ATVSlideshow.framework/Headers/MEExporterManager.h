/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, MELoader, NSCondition;

@interface MEExporterManager : NSObject {
	MELoader *_loader;	// 4 = 0x4
	NSMutableArray *_exportQueue;	// 8 = 0x8
	NSCondition *_exportWaitCondition;	// 12 = 0xc
}
@property(readonly, assign) MELoader *loader;	// G=0x3351e2e5; @synthesize=_loader
+ (void)releaseSharedManager;	// 0x3351dfcd
+ (id)sharedManager;	// 0x3351debd
- (id)init;	// 0x3351dd79
- (void)_exportCanceled:(id)canceled;	// 0x3351e1f5
- (void)_exportComplete:(id)complete;	// 0x3351e279
- (void)_queueAndWait:(id)wait;	// 0x3351e125
- (void)dealloc;	// 0x3351de2d
- (id)exporterWithDocument:(id)document;	// 0x3351e0d9
- (void)loadAllPlugins;	// 0x3351e099
- (void)loadPluginWithIdentifier:(id)identifier;	// 0x3351e0b9
// declared property getter: - (id)loader;	// 0x3351e2e5
@end
