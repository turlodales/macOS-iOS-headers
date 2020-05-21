//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ETModelDef, NSString;

@interface ETVariable : NSObject
{
    float _initializationAlpha;
    float _initializationBeta;
    unsigned long long _kind;
    NSString *_name;
    NSString *_layerName;
    unsigned long long _initializationMode;
    ETModelDef *_model;
}

- (void).cxx_destruct;
@property(nonatomic) __weak ETModelDef *model; // @synthesize model=_model;
@property float initializationBeta; // @synthesize initializationBeta=_initializationBeta;
@property float initializationAlpha; // @synthesize initializationAlpha=_initializationAlpha;
@property unsigned long long initializationMode; // @synthesize initializationMode=_initializationMode;
@property(retain, nonatomic) NSString *layerName; // @synthesize layerName=_layerName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long kind; // @synthesize kind=_kind;
- (id)swapWithOpaqueCopy:(id)arg1;
- (id)getOpaqueCopy;
- (id)copyData;
- (void)updateWithData:(id)arg1;
- (id)initWithModelDef:(id)arg1;

@end

