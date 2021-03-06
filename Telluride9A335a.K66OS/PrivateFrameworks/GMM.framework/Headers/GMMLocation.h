/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import "GMM-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface GMMLocation : NSObject {
	int _responseCode;	// 4 = 0x4
	MapPoint *_point;	// 8 = 0x8
	int _accuracy;	// 12 = 0xc
	int _confidence;	// 16 = 0x10
	NSString *_geo_string;	// 20 = 0x14
}
@property(assign) int accuracy;	// G=0x30b555e5; S=0x30b555f5; 
@property(assign) int confidence;	// G=0x30b55605; S=0x30b55615; 
@property(retain) NSString *geo_string;	// G=0x30b55625; S=0x30b55635; 
@property(assign) MapPoint *point;	// G=0x30b555c5; S=0x30b555d5; 
@property(assign) int responseCode;	// G=0x30b555a5; S=0x30b555b5; 
// declared property getter: - (int)accuracy;	// 0x30b555e5
// declared property getter: - (int)confidence;	// 0x30b55605
- (void)dealloc;	// 0x30b55679
// declared property getter: - (id)geo_string;	// 0x30b55625
// declared property getter: - (MapPoint *)point;	// 0x30b555c5
// declared property getter: - (int)responseCode;	// 0x30b555a5
// declared property setter: - (void)setAccuracy:(int)accuracy;	// 0x30b555f5
// declared property setter: - (void)setConfidence:(int)confidence;	// 0x30b55615
// declared property setter: - (void)setGeo_string:(id)string;	// 0x30b55635
// declared property setter: - (void)setPoint:(MapPoint *)point;	// 0x30b555d5
// declared property setter: - (void)setResponseCode:(int)code;	// 0x30b555b5
@end

