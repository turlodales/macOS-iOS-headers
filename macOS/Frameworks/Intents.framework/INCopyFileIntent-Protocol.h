//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol INCopyFileIntent <NSObject, JSExport>
@property(copy) NSArray *properties;
@property(copy) NSString *destinationName;
@property(copy) NSString *destinationType;
@property(copy) NSString *sourceName;
@property(copy) NSString *sourceType;
@property(copy) NSString *entityName;
@property(copy) NSString *entityType;
- (id)init;
@end

