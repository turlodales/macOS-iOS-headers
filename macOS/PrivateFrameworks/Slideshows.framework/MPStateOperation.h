//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Slideshows/MPAction.h>

@class NSString;

@interface MPStateOperation : MPAction
{
    NSString *_operation;
    NSString *_stateKey;
}

+ (id)stateOperation;
@property(copy, nonatomic) NSString *stateKey; // @synthesize stateKey=_stateKey;
@property(copy, nonatomic) NSString *operation; // @synthesize operation=_operation;
- (void)setAction:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

