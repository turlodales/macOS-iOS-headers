//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CPLAbstractObject;

@interface CPLPlatformObject : NSObject
{
    id <CPLAbstractObject> _abstractObject;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <CPLAbstractObject> abstractObject; // @synthesize abstractObject=_abstractObject;
- (id)description;
- (id)initWithAbstractObject:(id)arg1;
- (id)init;

@end

