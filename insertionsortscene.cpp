#include "insertionsortscene.h"

InsertionSortScene::InsertionSortScene()
{

}

void InsertionSortScene::step()
{
    if(sortedCount == getBarCount()){
        emit finished();
        return;
    }

    if(pos == -1 || compare(pos, pos+1)){
        setColourRange(sortedCount, getBarCount(), MainWindow::normal);

        pos = sortedCount;
        ++sortedCount;
    }else{
        swap(pos, pos+1);
        --pos;
    }
}
