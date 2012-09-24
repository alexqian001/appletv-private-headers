/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "CoreMediaStream-Structs.h"
#import "MSStreamsProtocol.h"

@class NSArray;

@interface MSPublishStreamsProtocol : MSStreamsProtocol {
	MSPSPCContext _context;	// 12 = 0xc
	NSArray *_assetCollectionsInFlight;	// 92 = 0x5c
	MSPSPCUCContext _UCContext;	// 96 = 0x60
}
@property(assign) id delegate;	// G=0x371482b5; S=0x371482e1; converted property
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x3714830d
- (void).cxx_destruct;	// 0x37149d59
- (void)_coreProtocolDidFailAuthenticationError:(id)_coreProtocol;	// 0x37149ba1
- (void)_coreProtocolDidFinishResponse:(id)_coreProtocol error:(id)error;	// 0x37149a79
- (void)_coreProtocolDidFinishUCResults:(id)_coreProtocol error:(id)error;	// 0x37149c85
- (BOOL)_insertInfoAboutAsset:(id)asset intoDictionary:(id)dictionary outError:(id *)error;	// 0x371485dd
- (id)_metadataDictForAsset:(id)asset outError:(id *)error;	// 0x37148935
- (id)_metadataDictForAssetCollection:(id)assetCollection outError:(id *)error;	// 0x37148f91
- (id)_missingAssetFieldErrorWithFieldName:(id)fieldName;	// 0x37148531
- (void)_resetConnectionVariables;	// 0x3714891d
- (void)abort;	// 0x37149a49
- (void)dealloc;	// 0x371484c9
// converted property getter: - (id)delegate;	// 0x371482b5
- (void)sendMetadataForAssetCollections:(id)assetCollections;	// 0x3714938d
- (void)sendUploadCompleteForAssetCollections:(id)assetCollections;	// 0x37149879
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x371482e1
@end
