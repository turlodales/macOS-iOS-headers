//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNFuture, CNLikeness;

@protocol CNContactLikenessMutator <NSObject>
- (CNFuture *)setLikenessAsCurrent:(CNLikeness *)arg1;
- (CNFuture *)deleteLikeness:(CNLikeness *)arg1;
- (CNFuture *)updateLikeness:(CNLikeness *)arg1;
- (CNFuture *)addNewLikeness:(CNLikeness *)arg1;
@end

