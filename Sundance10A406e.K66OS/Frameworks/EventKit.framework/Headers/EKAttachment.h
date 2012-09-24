/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKObject.h"

@class NSString, NSURL, NSNumber;

@interface EKAttachment : EKObject {
}
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x313d2add; 
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x313d2d05; 
@property(readonly, assign, nonatomic) NSString *fileFormat;	// G=0x313d2b4d; 
@property(readonly, assign, nonatomic) NSString *fileName;	// G=0x313d2af9; 
@property(readonly, assign, nonatomic) NSNumber *fileSize;	// G=0x313d2bb5; 
@property(readonly, assign, nonatomic) BOOL isBinary;	// G=0x313d2b69; 
@property(readonly, assign, nonatomic) NSURL *localURL;	// G=0x313d2b99; 
- (id)init;	// 0x313d2a71
// declared property getter: - (id)URL;	// 0x313d2add
// declared property getter: - (id)UUID;	// 0x313d2d05
- (int)compareFileNames:(id)names;	// 0x313d2d21
- (id)description;	// 0x313d2dd5
// declared property getter: - (id)fileFormat;	// 0x313d2b4d
// declared property getter: - (id)fileName;	// 0x313d2af9
// declared property getter: - (id)fileSize;	// 0x313d2bb5
// declared property getter: - (BOOL)isBinary;	// 0x313d2b69
- (BOOL)isEqual:(id)equal;	// 0x313d2d5d
// declared property getter: - (id)localURL;	// 0x313d2b99
@end
