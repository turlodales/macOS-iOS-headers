//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIBarcodeDescriptor.h>

@class NSData;

@interface CIQRCodeDescriptor : CIBarcodeDescriptor
{
    NSData *errorCorrectedPayload;
    long long symbolVersion;
    unsigned char maskPattern;
    long long errorCorrectionLevel;
}

+ (BOOL)supportsSecureCoding;
+ (id)descriptorWithPayload:(id)arg1 symbolVersion:(long long)arg2 maskPattern:(unsigned char)arg3 errorCorrectionLevel:(long long)arg4;
@property(readonly) long long errorCorrectionLevel; // @synthesize errorCorrectionLevel;
@property(readonly) unsigned char maskPattern; // @synthesize maskPattern;
@property(readonly) long long symbolVersion; // @synthesize symbolVersion;
@property(readonly) NSData *errorCorrectedPayload; // @synthesize errorCorrectedPayload;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithPayload:(id)arg1 symbolVersion:(long long)arg2 maskPattern:(unsigned char)arg3 errorCorrectionLevel:(long long)arg4;
- (BOOL)isValid;

@end

