//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICApp, NSArray, NSDictionary, NSString;

@interface ICShareExtension : NSObject
{
    ICApp *_app;
    NSString *_bundleIdentifier;
    NSString *_serviceType;
    NSString *_name;
    NSArray *_actions;
    NSDictionary *_definition;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *definition; // @synthesize definition=_definition;
@property(readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) __weak ICApp *app; // @synthesize app=_app;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic, getter=isAvailable) BOOL available;
- (id)initWithDefinition:(id)arg1 app:(id)arg2;

@end

