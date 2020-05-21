//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface _KSDeviceInfo : NSObject
{
    BOOL _needsUpdate;
    NSString *_name;
    NSString *_swVersion;
    NSString *_model;
    NSString *_modelDisplayName;
}

+ (id)ksDeviceWithName:(id)arg1 swVersion:(id)arg2;
+ (id)ksDeviceWithName:(id)arg1 needsUpgrade:(BOOL)arg2;
+ (id)ksDecviceWithName:(id)arg1 swVersion:(id)arg2 model:(id)arg3 modelDisplayName:(id)arg4;
+ (id)ksDecviceWithiCloudDeviceInfo:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(copy, nonatomic) NSString *modelDisplayName; // @synthesize modelDisplayName=_modelDisplayName;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *swVersion; // @synthesize swVersion=_swVersion;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;

@end

