//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MCDisplayNameInfo : NSObject
{
    NSString *_shortName;
    NSString *_fullName;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(readonly, copy, nonatomic) NSString *shortName; // @synthesize shortName=_shortName;
- (id)debugDescription;
- (id)initWithShortName:(id)arg1 fullName:(id)arg2;
- (id)init;

@end

