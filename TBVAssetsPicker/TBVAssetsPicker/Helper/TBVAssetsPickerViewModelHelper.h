//
//  TBVAssetsPickerViewModelHelper.h
//  TBVAssetPickerController
//
//  Created by tripleCC on 9/9/16.
//  Copyright © 2016 tripleCC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ReactiveObjC/ReactiveObjC.h>

@class TBVAssetsViewModel;
@class TBVAssetsToolBarViewModel;
@class TBVAssetsPickerController;

@interface TBVAssetsPickerViewModelHelper : NSObject
+ (void)setupAssetsViewMode:(TBVAssetsViewModel *)viewModel
                     picker:(TBVAssetsPickerController *)picker;
+ (TBVAssetsToolBarViewModel *)toolBarViewModelWithPicker:(TBVAssetsPickerController *)picker
                             selectedAssetsChangeSignal:(RACSignal *)changeSignal;
@end
