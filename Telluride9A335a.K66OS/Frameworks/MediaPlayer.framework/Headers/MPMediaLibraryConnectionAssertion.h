/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class MPMediaLibrary, NSString;

@interface MPMediaLibraryConnectionAssertion : NSObject {
@private
	MPMediaLibrary *_library;	// 4 = 0x4
	NSString *_identifier;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSString *identifier;	// G=0x301486f9; @synthesize=_identifier
- (id)_initWithMediaLibrary:(id)mediaLibrary identifier:(id)identifier;	// 0x301485b1
- (void)dealloc;	// 0x30148629
- (id)description;	// 0x301486a1
// declared property getter: - (id)identifier;	// 0x301486f9
@end
