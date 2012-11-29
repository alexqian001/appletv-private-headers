/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library

@class NSNumberFormatter;
@protocol OS_dispatch_queue;

@interface MCFormatterVendor : NSObject {
	NSNumberFormatter *_numberFormatter;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_syncQueue;	// 8 = 0x8
}
@property(readonly, retain) NSNumberFormatter *numberFormatter;	// G=0x344e7e65; converted property
+ (id)sharedInstance;	// 0x344e7de5
- (id)init;	// 0x344e7fe5
- (void).cxx_destruct;	// 0x344e8121
- (void)_localeDidChange:(id)_locale;	// 0x344e7f5d
- (void)dealloc;	// 0x344e80b5
// converted property getter: - (id)numberFormatter;	// 0x344e7e65
@end
