/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSProperty.h"

@class NSString;

@interface ICSAttachment : ICSProperty {
}
@property(retain) NSString *fmtype;	// G=0x35f1d4a1; S=0x35f1d4c1; 
@property(retain) NSString *managed_filename;	// G=0x35f1d589; S=0x35f1d5a9; 
@property(retain) NSString *managed_id;	// G=0x35f1d461; S=0x35f1d481; 
@property(assign) int size;	// G=0x35f1d3cd; S=0x35f1d40d; 
@property(assign) BOOL x_apple_autoarchived;	// G=0x35f1d4e1; S=0x35f1d515; 
@property(retain) NSString *x_apple_ews_attachmentid;	// G=0x35f1d609; S=0x35f1d629; 
@property(retain) NSString *x_apple_filename;	// G=0x35f1d5c9; S=0x35f1d5e9; 
- (id)initWithData:(id)data;	// 0x35f1d2a9
- (id)initWithURL:(id)url;	// 0x35f1d275
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x35f22155
- (id)filename;	// 0x35f1d301
// declared property getter: - (id)fmtype;	// 0x35f1d4a1
- (BOOL)isBinary;	// 0x35f1d2dd
// declared property getter: - (id)managed_filename;	// 0x35f1d589
// declared property getter: - (id)managed_id;	// 0x35f1d461
- (void)setData:(id)data;	// 0x35f1d649
// declared property setter: - (void)setFmtype:(id)fmtype;	// 0x35f1d4c1
// declared property setter: - (void)setManaged_filename:(id)filename;	// 0x35f1d5a9
// declared property setter: - (void)setManaged_id:(id)anId;	// 0x35f1d481
// declared property setter: - (void)setSize:(int)size;	// 0x35f1d40d
- (void)setURL:(id)url;	// 0x35f1d6ed
// declared property setter: - (void)setX_apple_autoarchived:(BOOL)autoarchived;	// 0x35f1d515
// declared property setter: - (void)setX_apple_ews_attachmentid:(id)attachmentid;	// 0x35f1d629
// declared property setter: - (void)setX_apple_filename:(id)filename;	// 0x35f1d5e9
// declared property getter: - (int)size;	// 0x35f1d3cd
// declared property getter: - (BOOL)x_apple_autoarchived;	// 0x35f1d4e1
// declared property getter: - (id)x_apple_ews_attachmentid;	// 0x35f1d609
// declared property getter: - (id)x_apple_filename;	// 0x35f1d5c9
@end

