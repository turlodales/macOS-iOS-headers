//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSData, VNCanceller;

@protocol VNClustererModelBuilding
- (NSArray *)updateModelByAddingFaces:(NSArray *)arg1 withGroupingIdentifiers:(NSArray *)arg2 andRemovingFaces:(NSArray *)arg3 canceller:(VNCanceller *)arg4 error:(id *)arg5;
- (NSArray *)updateModelByAddingFaces:(NSArray *)arg1 andRemovingFaces:(NSArray *)arg2 canceller:(VNCanceller *)arg3 error:(id *)arg4;
- (NSData *)saveAndReturnCurrentModelState:(id *)arg1;
- (BOOL)resetModelState:(NSData *)arg1 error:(id *)arg2;

@optional
- (NSArray *)updateModelByRemovingFaces:(NSArray *)arg1 canceller:(VNCanceller *)arg2 error:(id *)arg3;
- (NSArray *)updateModelByAddingFaces:(NSArray *)arg1 withGroupingIdentifiers:(NSArray *)arg2 canceller:(VNCanceller *)arg3 error:(id *)arg4;
- (NSArray *)updateModelByAddingFaces:(NSArray *)arg1 canceller:(VNCanceller *)arg2 error:(id *)arg3;
@end

