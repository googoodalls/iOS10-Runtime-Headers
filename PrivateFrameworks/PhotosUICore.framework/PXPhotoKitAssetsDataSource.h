/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotoKitAssetsDataSource : PXAssetsDataSource {
    PXPhotosDataSourceChange * _change;
    NSMutableDictionary * _layoutItemByAssetCache;
    PXPhotosDataSource * _photosDataSource;
}

@property (nonatomic, readonly) PXPhotosDataSourceChange *change;
@property (nonatomic, readonly) PXPhotosDataSource *photosDataSource;

- (void).cxx_destruct;
- (id)change;
- (bool)containsAnyItems;
- (bool)containsMultipleItems;
- (bool)couldObjectReferenceAppear:(id)arg1;
- (id)description;
- (unsigned long long)identifier;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })indexPathForObjectReference:(id)arg1;
- (id)initWithImmutablePhotosDataSource:(id)arg1 withChange:(id)arg2;
- (id)inputForItem:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)photosDataSource;
- (void)prefetchIndexPaths:(id)arg1;
- (id)startingAssetReference;

@end
