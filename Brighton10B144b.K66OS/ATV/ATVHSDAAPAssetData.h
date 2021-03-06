/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSData;

__attribute__((visibility("hidden")))
@interface ATVHSDAAPAssetData : XXUnknownSuperclass {
	NSData *_assetData;	// 4 = 0x4
	NSString *_assetString;	// 8 = 0x8
}
@property(retain, nonatomic) NSData *assetData;	// G=0xf0611; S=0xf0621; @synthesize=_assetData
@property(retain, nonatomic) NSString *assetString;	// G=0xf0631; S=0xf0641; @synthesize=_assetString
- (id)initWithData:(id)data;	// 0xeeabd
- (id)initWithString:(id)string;	// 0xeeb05
// declared property getter: - (id)assetData;	// 0xf0611
- (id)assetPlaybackURLWithHSClient:(id)hsclient;	// 0xeed99
// declared property getter: - (id)assetString;	// 0xf0631
- (unsigned long)codeForMediaKey:(id)mediaKey;	// 0xef775
- (void)dealloc;	// 0xeeb4d
- (id)decryptedDRMTokenDataWithHSClient:(id)hsclient;	// 0xeee79
- (id)mediaTypeForMediaKind:(unsigned long)mediaKind;	// 0xf048d
// declared property setter: - (void)setAssetData:(id)data;	// 0xf0621
// declared property setter: - (void)setAssetString:(id)string;	// 0xf0641
- (id)valueForATVMediaKey:(id)atvmediaKey withHSDataClient:(id)hsdataClient;	// 0xeeba5
- (id)valueForCode:(unsigned long)code;	// 0xeeccd
- (id)valueForCode:(unsigned long)code data:(char *)data length:(unsigned long)length;	// 0xeefb1
@end

