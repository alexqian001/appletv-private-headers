/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSString, NSData, NSURL;

@interface MCWebClipPayload : MCPayload {
	NSURL *_URL;	// 40 = 0x28
	NSString *_label;	// 44 = 0x2c
	NSData *_iconData;	// 48 = 0x30
	BOOL _isRemovable;	// 52 = 0x34
	BOOL _precomposed;	// 53 = 0x35
	BOOL _fullScreen;	// 54 = 0x36
}
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x3579dbb9; @synthesize=_URL
@property(readonly, assign, nonatomic) BOOL fullScreen;	// G=0x3579dc09; @synthesize=_fullScreen
@property(readonly, assign, nonatomic) NSData *iconData;	// G=0x3579dbd9; @synthesize=_iconData
@property(readonly, assign, nonatomic) BOOL isRemovable;	// G=0x3579dbe9; @synthesize=_isRemovable
@property(readonly, assign, nonatomic) NSString *label;	// G=0x3579dbc9; @synthesize=_label
@property(readonly, assign, nonatomic) BOOL precomposed;	// G=0x3579dbf9; @synthesize=_precomposed
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x3579cf35
+ (id)typeStrings;	// 0x3579cf0d
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x3579cfbd
- (void).cxx_destruct;	// 0x3579dc19
// declared property getter: - (id)URL;	// 0x3579dbb9
- (id)description;	// 0x3579d955
// declared property getter: - (BOOL)fullScreen;	// 0x3579dc09
// declared property getter: - (id)iconData;	// 0x3579dbd9
// declared property getter: - (BOOL)isRemovable;	// 0x3579dbe9
// declared property getter: - (id)label;	// 0x3579dbc9
// declared property getter: - (BOOL)precomposed;	// 0x3579dbf9
- (id)stubDictionary;	// 0x3579d841
- (id)subtitle1Description;	// 0x3579db51
- (id)subtitle1Label;	// 0x3579db41
- (id)subtitle2Description;	// 0x3579dba9
- (id)subtitle2Label;	// 0x3579db99
- (id)title;	// 0x3579db31
@end
