/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKObject.h"

@class NSNumber, NSURL, NSString;

@interface EKAttachment : EKObject {
}
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x3102f339; 
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x3102f565; 
@property(readonly, assign, nonatomic) NSString *fileFormat;	// G=0x3102f3a5; 
@property(readonly, assign, nonatomic) NSString *fileName;	// G=0x3102f355; 
@property(readonly, assign, nonatomic) NSNumber *fileSize;	// G=0x3102f40d; 
@property(readonly, assign, nonatomic) BOOL isBinary;	// G=0x3102f3c1; 
@property(readonly, assign, nonatomic) NSURL *localURL;	// G=0x3102f3f1; 
- (id)init;	// 0x3102f2cd
// declared property getter: - (id)URL;	// 0x3102f339
// declared property getter: - (id)UUID;	// 0x3102f565
- (int)compareFileNames:(id)names;	// 0x3102f581
- (id)description;	// 0x3102f631
// declared property getter: - (id)fileFormat;	// 0x3102f3a5
// declared property getter: - (id)fileName;	// 0x3102f355
// declared property getter: - (id)fileSize;	// 0x3102f40d
// declared property getter: - (BOOL)isBinary;	// 0x3102f3c1
- (BOOL)isEqual:(id)equal;	// 0x3102f5b9
// declared property getter: - (id)localURL;	// 0x3102f3f1
@end
