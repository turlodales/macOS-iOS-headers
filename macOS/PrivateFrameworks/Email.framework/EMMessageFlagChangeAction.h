//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Email/EMMessageChangeAction.h>

@class ECMessageFlagChange;

@interface EMMessageFlagChangeAction : EMMessageChangeAction
{
    ECMessageFlagChange *_flagChange;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) ECMessageFlagChange *flagChange; // @synthesize flagChange=_flagChange;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)signpostType;
- (id)initWithMessageListItems:(id)arg1 flagChange:(id)arg2;

@end

