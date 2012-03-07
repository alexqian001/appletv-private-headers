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
@property(retain) NSString *fmtype;	// G=0x3462a8d5; S=0x3462a8f5; 
@property(assign) BOOL x_apple_autoarchived;	// G=0x3462a915; S=0x3462a949; 
@property(retain) NSString *x_apple_ews_attachmentid;	// G=0x3462a9f9; S=0x3462aa19; 
@property(retain) NSString *x_apple_filename;	// G=0x3462a9b9; S=0x3462a9d9; 
- (id)initWithData:(id)data;	// 0x3462a7cd
- (id)initWithURL:(id)url;	// 0x3462a799
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x3462f521
- (id)filename;	// 0x3462a825
// declared property getter: - (id)fmtype;	// 0x3462a8d5
- (BOOL)isBinary;	// 0x3462a801
- (void)setData:(id)data;	// 0x3462aa39
// declared property setter: - (void)setFmtype:(id)fmtype;	// 0x3462a8f5
- (void)setURL:(id)url;	// 0x3462aad5
// declared property setter: - (void)setX_apple_autoarchived:(BOOL)autoarchived;	// 0x3462a949
// declared property setter: - (void)setX_apple_ews_attachmentid:(id)attachmentid;	// 0x3462aa19
// declared property setter: - (void)setX_apple_filename:(id)filename;	// 0x3462a9d9
// declared property getter: - (BOOL)x_apple_autoarchived;	// 0x3462a915
// declared property getter: - (id)x_apple_ews_attachmentid;	// 0x3462a9f9
// declared property getter: - (id)x_apple_filename;	// 0x3462a9b9
@end
