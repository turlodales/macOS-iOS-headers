//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/NSObject-Protocol.h>

@class OADScene3D, OADShape3D;

@protocol OADProperties3DParent <NSObject>
- (BOOL)hasShape3D;
- (void)setShape3D:(OADShape3D *)arg1;
- (OADShape3D *)shape3D;
- (BOOL)hasScene3D;
- (void)setScene3D:(OADScene3D *)arg1;
- (OADScene3D *)scene3D;
@end

