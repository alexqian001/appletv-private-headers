/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface PDHeadersFooters : NSObject {
@private
	BOOL mHasDateTime;	// 4 = 0x4
	BOOL mHasNowDateTime;	// 5 = 0x5
	BOOL mHasUserDateTime;	// 6 = 0x6
	BOOL mHasSlideNumber;	// 7 = 0x7
	BOOL mHasHeader;	// 8 = 0x8
	BOOL mHasFooter;	// 9 = 0x9
	int mDateTimeFormat;	// 12 = 0xc
	NSString *mUserDateTime;	// 16 = 0x10
	NSString *mHeader;	// 20 = 0x14
	NSString *mFooter;	// 24 = 0x18
}
@property(retain) id footer;	// G=0x31af4315; S=0x31af4325; converted property
@property(assign) BOOL hasDateTime;	// G=0x31af4235; S=0x31af4245; converted property
@property(assign) BOOL hasFooter;	// G=0x31af42d5; S=0x31af42e5; converted property
@property(assign) BOOL hasHeader;	// G=0x31af42b5; S=0x31af42c5; converted property
@property(assign) BOOL hasNowDateTime;	// G=0x31af4255; S=0x31af4265; converted property
@property(assign) BOOL hasSlideNumber;	// G=0x31af4295; S=0x31af42a5; converted property
@property(assign) BOOL hasUserDateTime;	// G=0x31af4275; S=0x31af4285; converted property
@property(retain) id header;	// G=0x31af4305; S=0x31af435d; converted property
@property(retain) id userDateTime;	// G=0x31af42f5; S=0x31af4395; converted property
- (void)dealloc;	// 0x31af43cd
// converted property getter: - (id)footer;	// 0x31af4315
// converted property getter: - (BOOL)hasDateTime;	// 0x31af4235
// converted property getter: - (BOOL)hasFooter;	// 0x31af42d5
// converted property getter: - (BOOL)hasHeader;	// 0x31af42b5
// converted property getter: - (BOOL)hasNowDateTime;	// 0x31af4255
// converted property getter: - (BOOL)hasSlideNumber;	// 0x31af4295
// converted property getter: - (BOOL)hasUserDateTime;	// 0x31af4275
// converted property getter: - (id)header;	// 0x31af4305
// converted property setter: - (void)setFooter:(id)footer;	// 0x31af4325
// converted property setter: - (void)setHasDateTime:(BOOL)time;	// 0x31af4245
// converted property setter: - (void)setHasFooter:(BOOL)footer;	// 0x31af42e5
// converted property setter: - (void)setHasHeader:(BOOL)header;	// 0x31af42c5
// converted property setter: - (void)setHasNowDateTime:(BOOL)time;	// 0x31af4265
// converted property setter: - (void)setHasSlideNumber:(BOOL)number;	// 0x31af42a5
// converted property setter: - (void)setHasUserDateTime:(BOOL)time;	// 0x31af4285
// converted property setter: - (void)setHeader:(id)header;	// 0x31af435d
// converted property setter: - (void)setUserDateTime:(id)time;	// 0x31af4395
// converted property getter: - (id)userDateTime;	// 0x31af42f5
@end

