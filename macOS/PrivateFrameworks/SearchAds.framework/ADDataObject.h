//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError;

@interface ADDataObject : NSObject
{
    NSDictionary *_iAdData;
    NSError *_error;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSDictionary *iAdData; // @synthesize iAdData=_iAdData;
- (id)initWith:(id)arg1 andError:(id)arg2;

@end

