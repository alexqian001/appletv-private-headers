/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableData;

@interface PTPDevicePropDescDataset : NSObject {
	unsigned short _devicePropertyCode;	// 4 = 0x4
	unsigned short _dataTypeCode;	// 6 = 0x6
	unsigned char _readWriteAttribute;	// 8 = 0x8
	id _factoryDefaultValue;	// 12 = 0xc
	id _currentValue;	// 16 = 0x10
	unsigned char _formFlag;	// 20 = 0x14
	id _minimumValue;	// 24 = 0x18
	id _maximumValue;	// 28 = 0x1c
	id _stepSize;	// 32 = 0x20
	unsigned short _numberOfValues;	// 36 = 0x24
	NSMutableArray *_supportedValues;	// 40 = 0x28
	NSMutableData *_content;	// 44 = 0x2c
	BOOL _dirty;	// 48 = 0x30
	BOOL _readOnlyObject;	// 49 = 0x31
}
@property(retain) NSMutableData *content;	// G=0x306122f1; S=0x306104f9; converted property
@property(retain) id currentValue;	// G=0x306125d1; S=0x306125e1; converted property
@property(assign) unsigned short dataTypeCode;	// G=0x3061250d; S=0x3061251d; converted property
@property(assign) unsigned short devicePropertyCode;	// G=0x306124dd; S=0x306124ed; converted property
@property(retain) id factoryDefaultValue;	// G=0x3061256d; S=0x3061257d; converted property
@property(assign) unsigned char formFlag;	// G=0x30612635; S=0x30612645; converted property
@property(retain) id maximumValue;	// G=0x306126c9; S=0x306126d9; converted property
@property(retain) id minimumValue;	// G=0x30612665; S=0x30612675; converted property
@property(assign) unsigned short numberOfValues;	// G=0x30612791; S=0x306127a1; converted property
@property(assign) unsigned char readWriteAttribute;	// G=0x3061253d; S=0x3061254d; converted property
@property(retain) id stepSize;	// G=0x3061272d; S=0x3061273d; converted property
@property(retain) NSMutableArray *supportedValues;	// G=0x306127c1; S=0x306127d1; converted property
- (id)init;	// 0x30610469
- (id)initWithData:(id)data;	// 0x30611399
- (id)initWithMutableData:(id)mutableData;	// 0x3061147d
// converted property getter: - (id)content;	// 0x306122f1
// converted property getter: - (id)currentValue;	// 0x306125d1
// converted property getter: - (unsigned short)dataTypeCode;	// 0x3061250d
- (void)dealloc;	// 0x30611541
- (id)description;	// 0x30612319
// converted property getter: - (unsigned short)devicePropertyCode;	// 0x306124dd
// converted property getter: - (id)factoryDefaultValue;	// 0x3061256d
// converted property getter: - (unsigned char)formFlag;	// 0x30612635
// converted property getter: - (id)maximumValue;	// 0x306126c9
// converted property getter: - (id)minimumValue;	// 0x30612665
// converted property getter: - (unsigned short)numberOfValues;	// 0x30612791
// converted property getter: - (unsigned char)readWriteAttribute;	// 0x3061253d
// converted property setter: - (void)setContent:(id)content;	// 0x306104f9
// converted property setter: - (void)setCurrentValue:(id)value;	// 0x306125e1
// converted property setter: - (void)setDataTypeCode:(unsigned short)code;	// 0x3061251d
// converted property setter: - (void)setDevicePropertyCode:(unsigned short)code;	// 0x306124ed
// converted property setter: - (void)setFactoryDefaultValue:(id)value;	// 0x3061257d
// converted property setter: - (void)setFormFlag:(unsigned char)flag;	// 0x30612645
// converted property setter: - (void)setMaximumValue:(id)value;	// 0x306126d9
// converted property setter: - (void)setMinimumValue:(id)value;	// 0x30612675
// converted property setter: - (void)setNumberOfValues:(unsigned short)values;	// 0x306127a1
// converted property setter: - (void)setReadWriteAttribute:(unsigned char)attribute;	// 0x3061254d
// converted property setter: - (void)setStepSize:(id)size;	// 0x3061273d
// converted property setter: - (void)setSupportedValues:(id)values;	// 0x306127d1
// converted property getter: - (id)stepSize;	// 0x3061272d
// converted property getter: - (id)supportedValues;	// 0x306127c1
- (void)updateContent;	// 0x30611609
@end
