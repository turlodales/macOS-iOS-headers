//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface IAProvider : NSObject
{
    NSString *_providerType;
    NSMutableArray *_servicesProvided;
}

+ (id)dataProviderIDs;
+ (id)aListProviderIDs;
+ (BOOL)providerTypeIsAList:(id)arg1;
- (void).cxx_destruct;
@property(readonly) NSString *providerType; // @synthesize providerType=_providerType;
@property(retain, nonatomic) NSArray *serviceTypesProvided; // @synthesize serviceTypesProvided=_servicesProvided;
- (id)description;
- (id)initWithProviderType:(id)arg1;

@end

