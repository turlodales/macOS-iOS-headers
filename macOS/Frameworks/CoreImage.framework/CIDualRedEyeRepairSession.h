//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CIContext, CIDualRedEyeRepairTuning, CIImage, CIRenderDestination, NSArray, NSDate, NSDictionary;

@interface CIDualRedEyeRepairSession : NSObject
{
    struct __CVBuffer *_primary;
    struct __CVBuffer *_secondary;
    struct __CVBuffer *_output;
    CIContext *context;
    NSArray *observations;
    CIRenderDestination *destination;
    CIImage *primaryImage;
    CIImage *secondaryImage;
    NSDictionary *metadata;
    NSDictionary *imageProperties;
    NSArray *faces;
    CIDualRedEyeRepairTuning *tuning;
    NSDate *timestamp;
    NSDictionary *tuningParametersByPortType;
    id <MTLCommandQueue> commandQueue;
    id <MTLTexture> primaryTexture;
    id <MTLTexture> secondaryTexture;
    id <MTLTexture> outputTexture;
    id <MTLCommandBuffer> commandBuffer;
}

+ (id)_contextRGBAh;
@property(retain, nonatomic) id <MTLCommandBuffer> commandBuffer; // @synthesize commandBuffer;
@property(retain, nonatomic) id <MTLTexture> outputTexture; // @synthesize outputTexture;
@property(retain, nonatomic) id <MTLTexture> secondaryTexture; // @synthesize secondaryTexture;
@property(retain, nonatomic) id <MTLTexture> primaryTexture; // @synthesize primaryTexture;
@property(retain, nonatomic) id <MTLCommandQueue> commandQueue; // @synthesize commandQueue;
@property(retain, nonatomic) NSDictionary *tuningParametersByPortType; // @synthesize tuningParametersByPortType;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp;
@property(retain, nonatomic) CIDualRedEyeRepairTuning *tuning; // @synthesize tuning;
@property(retain, nonatomic) NSArray *faces; // @synthesize faces;
@property(retain, nonatomic) NSDictionary *imageProperties; // @synthesize imageProperties;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata;
@property(retain, nonatomic) CIImage *secondaryImage; // @synthesize secondaryImage;
@property(retain, nonatomic) CIImage *primaryImage; // @synthesize primaryImage;
@property(retain, nonatomic) CIRenderDestination *destination; // @synthesize destination;
@property(retain, nonatomic) NSArray *observations; // @synthesize observations;
@property(retain, nonatomic) CIContext *context; // @synthesize context;
- (void)dumpObservation:(id)arg1 index:(int)arg2;
- (void)dumpSecondary;
- (_Bool)_repairPrimaryWithSecondary:(struct __CVBuffer *)arg1 to:(struct __CVBuffer *)arg2;
- (_Bool)repairPrimaryWithSecondary:(struct __CVBuffer *)arg1;
- (_Bool)setPrimary:(struct __CVBuffer *)arg1 observations:(id)arg2 metadata:(id)arg3;
- (BOOL)repairFace:(id)arg1 filter:(id)arg2;
- (void)customizeRepairFilter:(id)arg1 forFace:(id)arg2;
- (id)redEyeFaceFromObservation:(id)arg1 exifOrientation:(int)arg2;
- (int)validateRepair;
- (int)validateSetPrimary;
- (BOOL)validateRenderState;
- (void)dumpInputs;
- (BOOL)renderUsingProvidedCommandQueue;
- (BOOL)renderUsingPixelBuffers;
- (_Bool)prepareRepairWithTuningParametersByPortType:(id)arg1;
- (_Bool)prepareRepair;
- (_Bool)prewarm;
- (void)cleanupState;
- (void)dealloc;
- (id)init;

@end

