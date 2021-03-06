//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContact;

@interface CNUICoreContactEdit : NSObject
{
    CNContact *_original;
    CNContact *_modified;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CNContact *modified; // @synthesize modified=_modified;
@property(readonly, nonatomic) CNContact *original; // @synthesize original=_original;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)modifiesContact:(id)arg1;
@property(readonly, nonatomic) BOOL originalAndModifiedDiffer;
- (id)editBySettingModifiedContact:(id)arg1;
- (id)initWithOriginalContact:(id)arg1 modifiedContact:(id)arg2;
- (id)initWithContact:(id)arg1;

@end

